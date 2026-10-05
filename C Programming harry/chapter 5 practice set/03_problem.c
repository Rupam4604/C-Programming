// 3. Write a function to calculate force of attraction on a body of mass 'm' exerted by
// earth. Consider g = 9.8m/s² .

// #include<stdio.h>

// float force_attraction(float, float);

// float force_attraction(float force, float m)
// {
//     return force = (m * 9.8);
// }





// int main()
// {
//     float m = 30.0;
//     float force;
//     printf("force of attraction on a body: %.2f\n",force_attraction(force, m));
    
//     return 0;
// }


// 2nd

#include<stdio.h>

float force_attraction(float);

float force_attraction(float m)
{
    return (m * 9.8);
}





int main()
{
    float m = 30.0;
    
    printf("force of attraction on a body: %.2f\n",force_attraction(m));
    
    return 0;
}