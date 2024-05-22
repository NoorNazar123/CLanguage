void main(){

    float radius, area;
    const pi = 3.142;
    printf("Please enter radius of circle: ");
    scanf("%f", &radius);

    area = pi*radius*radius;

    printf("Area of circle is:%f /n", area);
    printf("Radius:%.2 f", radius);

    getch();
}

