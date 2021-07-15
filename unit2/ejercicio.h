
typedef struct markovito{
    char* name;
    char* type;
    int height;
    int weight;
    int degreesOffreedom;
    void(*sayHelloToRobot) (struct markovito);

}ROBOT;

void sayHelloToRobot(ROBOT markovito){
    printf("Hello Robot %s\n", markovito.name);
};