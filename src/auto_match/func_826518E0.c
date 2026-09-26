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
extern int fn_82645740();
extern int fn_826457A8();
extern int fn_8264D6C0();
extern int fn_82F68CC0();
extern int iRam83275d90;
extern unsigned int uRam83275b64;


undefined8 fn_826518E0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x4188) == *(int *)(param_1 + 0x5574)) {
    uVar1 = 1;
  }
  else {
    iVar2 = KeGetCurrentProcessType();
    if (iVar2 != 2) {
      if (*(int *)(param_1 + 0x5568) == 2) {
        if ((*(int *)(param_1 + 0x556c) != *(int *)(param_1 + 0x5570)) &&
           ((*(int *)(*(int *)(param_1 + 0x556c) * 0x10 + *(int *)(param_1 + 0x5560) + 0xc) == 0 ||
            (iVar2 = fn_826457A8(), iVar2 == 0)))) {
          fn_82F68CC0(0xffffffff83275db8,0xffffffff83275b68,0x1e0);
          uRam83275b64 = iRam83275d90;
          iVar2 = *(int *)(param_1 + 0x556c) * 0x10 + *(int *)(param_1 + 0x5560);
          if (*(int *)(iVar2 + 0xc) != 0) {
            fn_82645740();
          }
          uVar4 = (ulonglong)*(uint *)(iVar2 + 4);
          fn_82F68CC0(0xffffffff83275b68,uVar4,0x1e0);
          fn_8264D6C0(uVar4,uVar4 + 0x1e0,0);
          iVar2 = *(int *)(param_1 + 0x556c);
          piVar3 = (int *)(*(int *)(param_1 + 0x5564) + iVar2 * 8);
          iRam83275d90 = piVar3[1] - *piVar3;
          if (iVar2 == 3) {
            iVar2 = 0;
          }
          else {
            iVar2 = iVar2 + 1;
          }
          *(int *)(param_1 + 0x556c) = iVar2;
          *(undefined4 *)(param_1 + 0x5574) = *(undefined4 *)(param_1 + 0x4188);
          return 1;
        }
      }
      else if (*(int *)(param_1 + 0x5568) == 0) {
        *(undefined4 *)(param_1 + 0x5568) = 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

