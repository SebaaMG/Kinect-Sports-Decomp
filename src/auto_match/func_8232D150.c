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
extern int fn_82520780();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


undefined8 fn_8232D150(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if (param_2 == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
            (*(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c));
    if (fVar1 < *(float *)(param_1 + 0x28)) {
      return 1;
    }
    if (fVar1 < *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c)) {
      return 2;
    }
  }
  else {
    iVar2 = fn_82520780((double)*(float *)(param_1 + 0x34),0xffffffff83265a28);
    if (iVar2 == 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      if (((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
          (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28)) < *(float *)(param_1 + 0x28)) {
        return 1;
      }
      return 2;
    }
  }
  return 3;
}

