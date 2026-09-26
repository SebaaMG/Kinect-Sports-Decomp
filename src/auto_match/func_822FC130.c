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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82240378();
extern int fn_822BD338();


undefined8 fn_822FC130(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x28);
  if (uVar1 == 0) {
    uVar2 = fn_82230110(auStack_60,0xffffffff82196582);
  }
  else {
    uVar2 = fn_8223B688(auStack_40,(ulonglong)uVar1 + 4);
  }
  fn_82240378(auStack_80,uVar2);
  if (uVar1 == 0) {
    fn_82230300(auStack_60,1,0);
  }
  else {
    fn_82230300(auStack_40,1,0);
  }
  uVar4 = 0;
  puVar5 = (undefined4 *)0x831cb86c;
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20);
  while ((cVar3 = fn_822BD338(auStack_80,*puVar5), cVar3 == '\0' &&
         (cVar3 = fn_822BD338((ulonglong)uVar1 + 4,*puVar5), cVar3 == '\0'))) {
    uVar4 = uVar4 + 0xc;
    puVar5 = puVar5 + 3;
    if (0x3b < uVar4) {
      uVar2 = 0;
LAB_822fc220:
      fn_82230300(auStack_80,1,0);
      return uVar2;
    }
  }
  uVar2 = 1;
  goto LAB_822fc220;
}

