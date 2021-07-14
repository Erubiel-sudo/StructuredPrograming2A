import sys


sensorInput = "$GPGGA,134658.00,5106.9792,N,11402.3003,W,2,09,1.0,1048.47,M,-16.27,M,08,AAAA*60"



if __name__ == "__main__":
        print("GPS Activity")
    
        lista = sensorInput.split(",")
        hora = lista[1][:2]
        min =  lista[1][2:4]
        sec = lista[1][4:6]

        print("Header config: ", lista[0])
        print(f'hr: {hora}, min: {min}, sec: {sec}')
        print(f'Latitud: {lista[2]},{lista[3]}')
        print(f'Longitud: {lista[4]},{lista[5]}')

        GPS={'Header':lista[0], 'UTC':lista[1], 'Latitud':(lista[2],lista[3]), 'Longitud':(lista[4],lista[5])}
        print(GPS)