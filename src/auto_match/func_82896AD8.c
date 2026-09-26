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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern unsigned int *auStack_48;
extern int fn_8288BD68();
extern int fn_8288C358();
extern int fn_8288CD40();
extern int fn_82891180();
extern int fn_82896400();
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


void fn_82896AD8(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uStack_50;
  int iStack_4c;
  undefined1 auStack_48 [72];
  
  iStack_4c = **(int **)(param_1 + 0x98);
  if ((int *)iStack_4c != *(int **)(param_1 + 0x98)) {
    do {
      iVar2 = iStack_4c;
      uVar3 = fn_82896400(param_1 + 0x7c,iStack_4c + 0xc);
      fn_8288C358();
      uStack_50 = *(undefined4 *)(iVar2 + 0xc);
      piVar4 = (int *)fn_8288CD40(auStack_48,param_1 + 0x94,&uStack_50);
      uVar5 = 0;
      uVar1 = *(ushort *)(*piVar4 + 0x2e);
      if (uVar1 != 0) {
        do {
          uStack_50 = CONCAT22((short)uVar5,(((U64)(uStack_50) >> 16) & 0xFFFF));
          fn_82891180(uVar3,&uStack_50);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
      fn_8288BD68(&iStack_4c);
    } while (iStack_4c != *(int *)(param_1 + 0x98));
  }
  return;
}

