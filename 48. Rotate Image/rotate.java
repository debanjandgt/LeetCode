class Solution {
    public void rotate(int[][] matrix) {
        int [][] m=new int[matrix.length][matrix.length];
        int t=matrix.length;
        t=t-1;
        System.out.println(t);
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                m[j][i]=matrix[t][j];
            }
            t--;
        }
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                matrix[i][j]=m[i][j];
            }
        }
    }
}
