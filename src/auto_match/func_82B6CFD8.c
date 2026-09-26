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
extern unsigned int *auStack_50;
extern int fn_82AB15D0();
extern int fn_82AB60F0();
extern int fn_82AB6148();
extern int fn_82AB63F8();
extern int fn_82AB6648();
extern int fn_82AB66F8();
extern int fn_82AB67A8();
extern int fn_82AB6DA0();
extern int fn_82AB6EC0();
extern int fn_82AB7718();
extern int fn_82B69A00();
extern int fn_82B6CD48();
extern int fn_82B7FEE0();
extern int fn_82B7FFE8();
extern int fn_82B9F338();
extern int fn_82B9F3F8();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


undefined8 fn_82B6CFD8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar5;
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar6;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  auStack_50[0] = 0;
  iVar5 = fn_82B69A00(*(undefined4 *)(param_1 + 0x10),10);
  if (iVar5 != 0) {
    uStack_48 = fn_82AB6EC0(param_2,1);
    uStack_44 = fn_82AB6EC0(param_2,0);
    iVar5 = fn_82B9F338(*(undefined4 *)(param_1 + 0x14),&uStack_48,2,auStack_50);
    if (iVar5 != 0) {
      uVar1 = fn_82B9F3F8(auStack_50[0]);
      iVar5 = fn_82AB60F0();
      if (iVar5 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f00,0xffffffff820d9c18,0x2ad);
      }
      for (lVar2 = fn_82AB63F8(uVar1); lVar2 != 0; lVar2 = fn_82AB66F8(uVar1,lVar2)) {
        puVar6 = (undefined4 *)fn_82AB67A8(lVar2);
        iVar5 = fn_82AB7718(*puVar6,param_2);
        if ((iVar5 != 0) && (iVar5 = fn_82AB7718(puVar6[1],param_2), iVar5 != 0)) {
          uVar3 = fn_82B6CD48(*puVar6,puVar6[1]);
          if ((uVar3 & 0xffffffff) == 0) {
            fn_82AB15D0(uVar3,0xffffffff820d2ea4,0xffffffff820d9ec0,0xffffffff820d9c18,699);
          }
          fn_82AB6DA0(*puVar6);
          fn_82AB6DA0(puVar6[1]);
          fn_82B7FEE0(param_3,*puVar6,param_2);
          fn_82B7FFE8(param_3,puVar6[1],param_2);
          uVar4 = fn_82AB6648(uVar1,lVar2);
          fn_82AB6148(uVar1,uVar4);
          return 1;
        }
      }
    }
  }
  return 0;
}

