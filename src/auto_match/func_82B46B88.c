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
extern unsigned int *auStack_20;
extern int fn_82AA66A8();
extern int fn_82B46050();


ulonglong fn_82B46B88(int param_1,int param_2)

{
  int iVar2;
  ulonglong uVar1;
  undefined1 auStack_20 [8];
  
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == 0xe) {
    uVar1 = (longlong)*(int *)(param_2 + 0x18) * (longlong)*(int *)(param_2 + 0x14);
  }
  else {
    if (iVar2 != 0xf) {
      if (iVar2 == 0x1c) {
        iVar2 = fn_82B46050(param_1,param_2,auStack_20);
        iVar2 = *(int *)(*(int *)(iVar2 * 0x28 + *(int *)(param_1 + 0xc) + 0x10) + 0x30);
        if (*(int *)(iVar2 + 4) == 8) {
          if (*(int *)(param_2 + 0x18) == 0) goto code_r0x82b46c80;
          iVar2 = *(int *)(iVar2 + 0x10);
          if (*(int *)(iVar2 + 4) != 9) {
            iVar2 = 0;
          }
        }
        else if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 9)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 0x10) == 2) {
            if ((*(uint *)(iVar2 + 0x24) & 0x400) == 0) {
              return (ulonglong)*(uint *)(iVar2 + 0x1c);
            }
          }
          else if (*(int *)(iVar2 + 0x1c) != 1) goto code_r0x82b46c80;
          return (ulonglong)*(uint *)(iVar2 + 0x20);
        }
      }
code_r0x82b46c80:
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if (*(uint *)(param_2 + 0x10) < 4) {
      uVar1 = 1;
    }
    else {
      if (*(uint *)(param_2 + 0x10) != 6) goto code_r0x82b46c80;
      uVar1 = (ulonglong)*(uint *)(param_2 + 0x1c);
    }
  }
  return uVar1;
}

