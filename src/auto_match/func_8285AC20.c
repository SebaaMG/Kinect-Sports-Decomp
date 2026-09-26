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
extern int fn_828114A8();
extern int fn_82811500();
extern int fn_828116B8();
extern int iRam83211334;
extern int iRam83211338;
extern unsigned int uRam8321133c;


undefined8 fn_8285AC20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  fn_828114A8(uRam8321133c,*(undefined4 *)(param_1 + 0x44));
  iVar2 = 0;
  if (*(short *)(param_1 + 0x34) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x30));
      if (*(char *)(*(int *)(iVar1 + 0x40) + iRam83211334) != '\0') {
        iVar4 = *(int *)(iVar1 + 0x34);
        if (iVar4 == param_1) {
          iVar4 = *(int *)(iVar1 + 0x38);
        }
        iVar1 = fn_828116B8(uRam8321133c,*(undefined4 *)(iVar4 + 0x44));
        if ((iVar1 == 0) && ((iVar4 == iRam83211338 || (iVar1 = fn_8285AC20(iVar4), iVar1 != 0))))
        {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x34));
  }
  fn_82811500(uRam8321133c,*(undefined4 *)(param_1 + 0x44));
  return 0;
}

