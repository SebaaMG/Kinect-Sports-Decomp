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
extern unsigned int lbl_821AAD20;


ulonglong fn_8279A940(int param_1)

{
  float fVar1;
  bool bVar2;
  
  if ((*(byte *)(param_1 + 0x13d) & 8) == 0) {
    if ((*(int *)(param_1 + 0x114) == 0) ||
       (bVar2 = false, (*(ushort *)(*(int *)(param_1 + 0x114) + 0x68) & 1) != 0)) {
      bVar2 = true;
    }
    fVar1 = lbl_821AAD20;
    if (*(uint *)(param_1 + 0x100) != 0) {
      fVar1 = (float)*(uint *)(param_1 + 0x100);
    }
    fVar1 = (fVar1 - (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x3c))) +
            (float)(longlong)(int)(-(uint)!bVar2 & 0x4b0);
    if (fVar1 < 0.0) {
      fVar1 = lbl_821AAD20;
    }
    return (longlong)fVar1 & 0xffffffff;
  }
  return 0;
}

