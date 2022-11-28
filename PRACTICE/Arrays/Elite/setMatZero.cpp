class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        int colFlag = 1;
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Marking the temp array as 0: (First phase):

        for (int i = 0; i < rows; i++)
        {
            // If 0 is present in flagged array:

            if (matrix[i][0] == 0)
            {
                colFlag = 0; // False
            }
            for (int j = 1; j < cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }

        // Reverse tracking from matrix[row][cols]:

        for (int i = rows - 1; i >= 0; i--)
        {
            for (int j = cols - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0; // Sets the rows and columns = 0;
                }
            }
            // If 0 is present in flagged array:
            if (colFlag == 0)
            {
                matrix[i][0] = 0;
            }
        }
    }
};