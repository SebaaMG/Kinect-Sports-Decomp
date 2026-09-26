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
extern int fn_82230218();
extern int fn_824C9D48();
extern int fn_82520780();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


undefined8 fn_824C9E38(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_82520780((double)(float)param_2[9],0xffffffff83265a28);
  if ((int)uVar1 != 0) {
    if ((float)param_2[7] <= lbl_821CC160) {
      if (0xf < (uint)param_2[5]) {
        param_2 = (undefined4 *)*param_2;
      }
      fn_824C9D48(param_1,param_2);
    }
    else {
      fn_82230218(param_1 + 0x24,param_2,0,0xffffffffffffffff);
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(float *)(param_1 + 0x40) =
           ((float)param_2[8] - (float)param_2[7]) *
           ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + (float)param_2[7];
    }
    uVar1 = 1;
  }
  return uVar1;
}

