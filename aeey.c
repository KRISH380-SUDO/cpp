    #include <stdio.h>
void main()
{

    int a, n;
    printf("Enter the value of N \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the arrs \n");
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; ++i) 
    {

        for (int j = i + 1; j < n; ++j)
        {

            if (arr[i] > arr[j]) 
            {
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;

            }

        }

    }

    printf("sort array elements \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d", arr[i]);
    }
}