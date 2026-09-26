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
extern int fn_8252CAF8();
extern int fn_82569980();
extern int fn_8261D908();
extern unsigned int lbl_821CC160;


void fn_8260E528(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  iVar4 = param_3;
  iVar3 = fn_82569980(param_1,*(undefined1 *)(param_3 + 0x10));
  if (iVar3 != -1) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xd8) + iVar3 * 0x30 + 0x10);
    if (iVar3 != 0) {
      if (param_5 == 0) {
        *(undefined4 *)(iVar3 + 0x300) = lbl_821CC160;
      }
      else if (param_5 == 2) {
        bVar5 = 0;
        if (*(int *)(iVar4 + 0x18) != 0) {
          bVar5 = 0;
          if (*(int *)(iVar3 + 0x8c0) != 0) {
            iVar2 = (uint)*(byte *)(iVar4 + 0x1c) * 4;
            iVar1 = iVar2 >> 3;
            bVar5 = *(byte *)(iVar1 + *(int *)(iVar3 + 0x8c0) + 0xd4) >>
                    (iVar2 + iVar1 * -8 & 0x3fU) & 0xf;
          }
          fn_8252CAF8(iVar3,(uint)*(byte *)(iVar4 + 0x1c),*(undefined1 *)(param_3 + 0x1d));
        }
        fn_8261D908((double)*(float *)(param_3 + 0x14),iVar3);
        if (*(int *)(param_3 + 0x18) != 0) {
          fn_8252CAF8(iVar3,*(undefined1 *)(param_3 + 0x1c),bVar5);
        }
      }
    }
  }
  return;
}

