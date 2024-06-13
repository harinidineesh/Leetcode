int c(const void* x, const void* y){
    return *(int*)x - *(int*)y;
}
int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    qsort(seats,seatsSize,sizeof(int),c);
    qsort(students,studentsSize,sizeof(int),c);
    int result =0;
    for(int i=0;i<studentsSize;i++){
         result += abs((seats[i]-students[i]));
    }
    return result;
}