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
extern unsigned int lbl_8218E0C8;
extern unsigned int lbl_82191598;
extern unsigned int lbl_821954C8;
extern unsigned int lbl_821955CC;
extern unsigned int lbl_821955D0;
extern unsigned int lbl_821CA460;


void fn_824DCB30(int *param_1,int *param_2,undefined2 *param_3)

{
  float fVar1;
  undefined2 uVar2;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_3 == (undefined2 *)0x0) {
    return;
  }
  if (in_register_00010018 <= lbl_821955CC) {
    uVar2 = 0;
    *param_1 = 0;
    *param_2 = 0;
  }
  else {
    uVar2 = (undefined2)(((longlong)(in_register_00010018 * lbl_821954C8) & 0x1fffU) << 3);
    fVar1 = (lbl_821CA460 / in_register_00010018) * in_register_00010014 * lbl_821955D0 -
            lbl_82191598;
    *param_1 = (int)((lbl_821CA460 / in_register_00010018) * in_register_00010010 * lbl_821955D0 +
                    lbl_8218E0C8);
    *param_2 = (int)-fVar1;
  }
  *param_3 = uVar2;
  return;
}

