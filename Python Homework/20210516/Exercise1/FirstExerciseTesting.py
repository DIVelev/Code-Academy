import unittest
from .FirstExercise import *

class FirstExerciseTesting(unittest.TestCase):
    
    def test_findEven(self):
        result = findEven(200,241)
        self.assertEqual(result,"200,202,204,206,208,211,213,215,217,219,220,222,224,226,228,231,233,235,237,239,240")
        
if __name__ == "__main__":
    unittest.main()
    
