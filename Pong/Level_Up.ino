



byte frames[22][8] = {
		{B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00011000},

	        {B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00011000,
		B00000000,
		B00011000,
		B00111100},

		{B00000000,
		B00000000,
		B00011000,
		B00000000,
		B00000000,
		B00011000,
		B00111100,
		B01111110},

	        {B0011000,
		B00000000,
		B00000000,
		B00000000,
		B00011000,
		B00111100,
		B01111110,
		B00100100},

		{B00000000,
		B00000000,
		B00000000,
		B00011000,
		B00111100,
		B01111110,
		B00100100,
		B00000000},

	        {B00000000,
		B00000000,
		B00011000,
		B00111100,
		B01111110,
		B00100100,
		B00000000,
		B00000000},

	        {B00000000,
		B00011000,
		B00111100,
		B01111110,
		B00100100,
		B00000000,
		B00000000,
		B00000000},

	        {B00011000,
		B00111100,
		B01111110,
		B00100100,
		B00000000,
		B00000000,
		B00000000,
		B00000000},

	          
                {B00111100,
		B01111110,
		B00100100,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000},

	        {B01111110,
		B00100100,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000},

		{B00100100,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000},

	        {B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000},

	        {B00000000,
		B01000000,
		B01000000,
		B01000000,
		B01000000,
		B01000000,
		B01111100,
		B00000000},

	        {B00000000,
		B01111100,
		B01000000,
		B01111100,
		B01111100,
		B01000000,
		B01111100,
		B00000000},
	        
                {B00000000,
		B01000010,
		B01000010,
		B00100100,
		B00100100,
		B00011000,
		B00011000,
		B00000000},

	        {B00000000,
		B01111100,
		B01000000,
		B01111100,
		B01111100,
		B01000000,
		B01111100,
		B00000000},

		{B00000000,
		B01000000,
		B01000000,
		B01000000,
		B01000000,
		B01000000,
		B01111100,
		B00000000},

	        {B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000},

                {B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000},

	        {B00000000,
		B01000010,
		B01000010,
		B01000010,
		B01000010,
		B01000010,
		B00111100,
		B00000000},

		{B00000000,
		B01111100,
		B01000100,
		B01000100,
		B01111100,
		B01000000,
		B01000000,
		B00000000},

	        {B00000000,
		B01010100,
		B01010100,
		B01010100,
		B01010100,
		B00000000,
		B01010100,
		B00000000}};
void levelUp() {
  // Loop through all frames
  for(int i=0; i<22; i++) {
    gamer.printImage(frames[i]);
    delay(250);
  }
}