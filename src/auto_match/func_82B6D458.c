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
extern int fn_82AB15D0();
extern int fn_82AB6648();
extern int fn_82AB6770();
extern int fn_82B6E928();


longlong fn_82B6D458(undefined4 *param_1,ulonglong param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d77ac,0xffffffff820d9f48,0x2dd);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f3c,0xffffffff820d9f48,0x2de);
  }
  if (param_3 == (uint *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da0a8,0xffffffff820d9f48,0x2df);
  }
  if (*(int *)param_3[8] == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da080,0xffffffff820d9f48,0x2e2);
  }
  if ((ulonglong)param_3[8] == 0xfffffffffffffff8) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da064,0xffffffff820d9f48,0x2e3);
  }
  if (*param_3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da048,0xffffffff820d9f48,0x2e4);
  }
  uVar1 = *param_3;
  *param_3 = (uint)((ulonglong)uVar1 - 1);
  if ((ulonglong)uVar1 - 1 == 0) {
    puVar2 = (uint *)fn_82B6E928(param_2,(undefined4 *)param_3[8] + 2,
                                       *(undefined4 *)param_3[8]);
    if (puVar2 != param_3) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da028,0xffffffff820d9f48,0x2f2);
    }
    if (puVar2[6] != 0) {
      if ((param_4 < 0) || (7 < param_4)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fe8,0xffffffff820d9f48,0x2fa);
      }
      if (puVar2[5] == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fc0,0xffffffff820d9f48,0x2fe);
      }
      param_1[param_4 + 0x47] = param_1[param_4 + 0x47] + *(int *)puVar2[8] * -4;
      (*(code *)param_1[4])(*param_1,puVar2 + 1);
      fn_82AB6648(param_1[param_4 + 0xf],puVar2[6]);
      fn_82AB6770();
    }
    iVar3 = (*(code *)param_1[2])(*param_1,param_3[8]);
    if (iVar3 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x312);
    }
    lVar4 = (*(code *)param_1[2])(*param_1,param_3);
    if (lVar4 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x31b);
    }
  }
  return lVar4;
}

