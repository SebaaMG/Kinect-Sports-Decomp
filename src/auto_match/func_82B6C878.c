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
extern int fn_82AB5FE0();
extern int fn_82AB6498();
extern int fn_82AB6770();
extern int fn_82AB67A8();
extern int fn_82AB6BC8();
extern int fn_82B6B0C8();
extern int fn_82B6B230();
extern int fn_82B9F808();


undefined8 fn_82B6C878(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar4;
  longlong lVar2;
  longlong lVar3;
  int iVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9c10,0xffffffff820d9c18,0x11d);
  }
  iVar5 = param_1[6];
  if (iVar5 != 0) {
    while (lVar3 = fn_82AB6498(iVar5), lVar3 != 0) {
      uVar1 = fn_82AB67A8(lVar3);
      while (lVar2 = fn_82AB6498(uVar1), lVar2 != 0) {
        puVar4 = (undefined4 *)fn_82AB67A8(lVar2);
        fn_82AB6BC8(*puVar4);
        fn_82AB6BC8(puVar4[1]);
        fn_82B6B230(param_1[7],puVar4);
        fn_82AB6770(lVar2);
      }
      fn_82AB5FE0(uVar1);
      fn_82AB6770(lVar3);
      iVar5 = param_1[6];
    }
    fn_82AB5FE0(param_1[6]);
  }
  if (param_1[5] != 0) {
    fn_82B9F808();
  }
  if (param_1[7] != 0) {
    fn_82B6B0C8();
  }
  (*(code *)param_1[2])(*param_1,param_1);
  return 0;
}

