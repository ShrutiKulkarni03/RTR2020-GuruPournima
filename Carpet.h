void DisplayCarpet()
{

	glBegin(GL_QUADS);

	//top left corner
	glColor3d(0.7215686274509804, 0.4196078431372549, 0.0274509803921569);
	glVertex3f(-0.65f, -0.5f, 0.0f);

	//top right corner
	glColor3d(0.7215686274509804, 0.4196078431372549, 0.0274509803921569);
	glVertex3f(0.65f, -0.5f, 0.0f);

	//bottom right corner 
	glColor3d(0.6515686274509804, 0.3596078431372549, 0.0054509803921569);
	glVertex3f(0.9f, -1.0f, 0.0f);

	//bottom left corner
	glColor3d(0.6515686274509804, 0.3596078431372549, 0.0054509803921569);
	glVertex3f(-0.9f, -1.0f, 0.0f);
	glEnd();

}
