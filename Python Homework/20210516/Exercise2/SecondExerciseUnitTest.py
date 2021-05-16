import unittest
from .SecondExercise import StringTesting

class TestString(unittest.TestCase):
    
    def setUp(self):
        self.string = StringTesting()
        self.mockUpString = "Pesho"
    
    def test_getString(self):
        self.assertEqual(self.string.getString(), self.mockUpString)
        
    def test_printString(self):
        self.assertEqual(self.string.printString(),self.mockUpString.upper())
        
        
if __name__ == "__main__":
    unittest.main()
