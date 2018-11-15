#ifndef _NXREADER_UTILS
#define _NXREADER_UTILS

enum WindowState { MENU, BOOK };
enum Orientation { LAND,
                   LAND_R,
                   PORT,
                   PORT_R};
class Util {
private:

public:
  Util(void);
	~Util(void);

  static int* WINDOW_W;
  static int* WINDOW_H;

  const int FRAMES_PER_SECOND = 20;
  const int FRAME_DELAY = 1000 / FRAMES_PER_SECOND;

  static Orientation orientation;
  static float getAngle();
  static void setOrientation(Orientation o);
  static Orientation getOrientation();

  static int getFullWidth();
};

#endif
