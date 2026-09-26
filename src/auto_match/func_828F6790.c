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
extern int fn_8265C940();
extern int fn_828FAF58();
extern int fn_828FBB60();


undefined8 fn_828F6790(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x280);
  uVar2 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),piVar5
                           );
  if ((int)uVar2 < 0) goto LAB_828f686c;
  iVar4 = *piVar5;
  if ((iVar4 == 2) || (iVar4 == 4)) {
    puVar3 = (undefined4 *)fn_8265C940(8,0x24810000);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x288);
      puVar3[1] = *(undefined4 *)(param_1 + 0x44);
      *puVar3 = uVar1;
    }
    *(undefined4 **)(param_1 + 0x44) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      uVar2 = 0xffffffff8007000e;
      goto LAB_828f686c;
    }
    uVar2 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),
                              piVar5);
    if ((int)uVar2 < 0) goto LAB_828f686c;
    iVar4 = *piVar5;
    if ((iVar4 != 0xc) && (iVar4 != 0xd)) goto LAB_828f684c;
  }
  else {
LAB_828f684c:
    if ((iVar4 != 0xc) && (iVar4 != 0xd)) {
      fn_828FAF58(*(undefined4 *)(param_1 + 0x278),0);
    }
  }
  uVar2 = 0;
LAB_828f686c:
  *(undefined4 *)(param_1 + 0x4c) = 1;
  return uVar2;
}

