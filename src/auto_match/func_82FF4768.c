typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82A1E650();
extern int fn_82FF4618();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


void fn_82FF4768(int param_1,int param_2)

{
  int iStack_30;
  uint uStack_2c;
  int *piStack_28;
  
  RtlEnterCriticalSection(param_1 + 0x88);
  fn_82FF4618(&iStack_30,param_1 + 4);
joined_r0x82ff479c:
  if (piStack_28 == (int *)0x0) {
    RtlLeaveCriticalSection(param_1 + 0x88);
    fn_82A1E650(*(undefined4 *)(param_1 + 0xa4),0xffffffffffffffff);
    return;
  }
  do {
    do {
      if (piStack_28[0xd] == param_2) {
        piStack_28[0xc] = 0;
        *(undefined2 *)((int)piStack_28 + 0x3a) = 0;
      }
      piStack_28 = (int *)*piStack_28;
    } while (piStack_28 != (int *)0x0);
    do {
      uStack_2c = uStack_2c + 1;
      if (0x1e < uStack_2c) goto joined_r0x82ff479c;
      piStack_28 = *(int **)(uStack_2c * 4 + iStack_30);
    } while (piStack_28 == (int *)0x0);
  } while( true );
}

