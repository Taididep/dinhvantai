from ._anvil_designer import Form1Template
from anvil import *

class Form1(Form1Template):
  def __init__(self, **properties):
    # Set Form properties and Data Bindings.
    self.init_components(**properties)

    # Any code you write here will run before the form opens.

  def button_1_click(self, **event_args):
    """This method is called when the button is clicked"""
    # Get the numbers from text_area_1
    numbers = self.text_area_1.text.split()  # Split the input by whitespace

    # Convert the numbers to integers
    numbers = [int(num) for num in numbers]

    # Sort the numbers using Insertion Sort
    sorted_numbers = insertion_sort(numbers)

    # Convert the sorted numbers back to strings
    sorted_numbers_str = [str(num) for num in sorted_numbers]

    # Join the sorted numbers into a single string separated by whitespace
    sorted_numbers_str_with_whitespace = ' '.join(sorted_numbers_str)

    # Set the sorted numbers string to text_area_2
    self.text_area_2.text = sorted_numbers_str_with_whitespace
    pass
    

def insertion_sort(arr):
  for i in range(1, len(arr)):
      key = arr[i]
      j = i - 1
      while j >= 0 and arr[j] > key:
          arr[j + 1] = arr[j]
          j -= 1
      arr[j + 1] = key
  return arr