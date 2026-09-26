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
extern int fn_8268CF60();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_82741A50();
extern int fn_82741C18();


void fn_82742240(int param_1)

{
  undefined4 uVar1;
  char cVar5;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar6;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  cVar5 = fn_82695468(param_1,0xf);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef08,0,0);
  }
  else {
    uVar6 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    if (((uVar6 & 0xffffffff) != 0) && (0 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      iVar3 = fn_82696958(uVar2,uVar1);
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x10) + 8))(iVar3 + 0x10);
      if (iVar4 == 0xf) {
        fn_82741A50(auStack_60,uVar6,*(undefined4 *)(param_1 + 0x18));
        uVar2 = fn_82741A50(auStack_40,iVar3,*(undefined4 *)(param_1 + 0x18));
        fn_8268CF60(auStack_60,uVar2);
        fn_82741C18(uVar6,*(undefined4 *)(param_1 + 0x18),auStack_60);
      }
    }
  }
  return;
}

