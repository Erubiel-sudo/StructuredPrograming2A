import sys


sensorInput = "$GPGGA,134658.00,5106.9792,N,11402.3003,W,2,09,1.0,1048.47,M,-16.27,M,08,AAAA*60" 


if __name__ == "__main__":
        print("GPS Activity!")
        sensorInput = "$GPGGA,134658.00,5106.9792,N,11402.3003,W,2,09,1.0,1048.47,M,-16.27,M,08,AAAA*60" 
        newString = sensorInput[0:5]
        ##print( f'sensorInput[{1}]: {sensorInput[1]}')
        print(f'Log Header: {newString}')
        
        listaSensor =   sensorInput.split(   ","  )
        hr = listaSensor[1][:2]
        min =  listaSensor[1][2:4]
        sec = listaSensor[1][4:6]
        print(f'hr: {hr}, min: {min}, sec: {sec}')

        latitud = listaSensor[2] + listaSensor[3]
        print(f'Latitud: {latitud}')
        longitud = listaSensor[4] + listaSensor[5]
        print(f'Longitud:{longitud}')
        
        GPS = {'Header' :sensorInput[0:5], 'UTC':{'hr': listaSensor[1][:2],'min': listaSensor[1][2:4] ,'sec': listaSensor[1][4:6]}, 'Latitud':listaSensor[2] + listaSensor[3], 'Longitud': listaSensor[4] + listaSensor[5] }
        print(GPS)

        

        

