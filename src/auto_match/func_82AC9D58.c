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
extern unsigned int *auStack_70;
extern int fn_82ABE2E0();
extern int fn_82AC8E50();
extern int fn_82AC91D0();
extern int fn_82B8AC10();


/* WARNING: Type propagation algorithm not settling */

void fn_82AC9D58(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined1 auStack_70 [112];
  
  fn_82AC8E50(auStack_70,param_1);
  for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    if (((*(uint *)(param_1 + 0x2c) & 0x10) == 0) ||
       (bVar3 = true, (*(uint *)(param_1 + 0x2c) & 0x20) != 0)) {
      bVar3 = false;
    }
    fn_82AC91D0(param_1,uVar1,!bVar3,auStack_70);
  }
  uVar1 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) + 0x14);
  uVar4 = 0;
  do {
    while( true ) {
      uVar5 = uVar1;
      if (((uVar5 & 1) != 0) || (uVar5 == 0)) {
        return;
      }
      if (((*(uint *)(uVar5 + 8) & 0x3f80) == 16000) &&
         (cVar6 = fn_82ABE2E0(uVar5), cVar6 != '\0')) {
        fn_82B8AC10(param_1,uVar5,0,1);
      }
      if (uVar4 == 0) break;
      uVar1 = *(uint *)((uVar4 & 0xfffffffe) + 0x28);
      if (uVar5 == (-(uint)((uVar1 & 1) == 0) & uVar1)) {
LAB_82ac9e68:
        uVar1 = *(uint *)((uVar5 & 0xfffffffe) + 0x28);
        uVar4 = uVar5;
      }
    }
    uVar1 = *(uint *)(param_1 + 4);
    uVar2 = *(uint *)((-(uint)((uVar1 & 1) == 0) & uVar1) + 0x14);
    if (uVar5 == (-(uint)((uVar2 & 1) == 0) & uVar2)) goto LAB_82ac9e68;
    uVar1 = *(uint *)((-(uint)((uVar1 & 1) == 0) & uVar1) + 0x14);
  } while( true );
}

