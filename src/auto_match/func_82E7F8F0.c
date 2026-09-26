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
extern unsigned int *auStack_30;
extern int fn_82E7E7E0();
extern int fn_82E7ED68();
extern int fn_82E7F868();
extern int fn_82F68CC0();
extern unsigned int uStack_18;
extern unsigned int uStack_20;


longlong fn_82E7F8F0(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined4 auStack_30 [4];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auStack_30[0] = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  if (((param_3 & 0xffffffff) == 0) || ((param_1 & 0xffffffff) == (param_3 & 0xffffffff))) {
    lVar3 = -0x7fffbffd;
  }
  else {
    *(undefined8 *)param_3 = 0;
    ((undefined8 *)param_3)[1] = 0;
    lVar3 = fn_82E7ED68(param_1,param_2,auStack_30);
    if (-1 < lVar3) {
      uVar1 = *(ushort *)param_1 & 0xfff;
      if (uVar1 == 0xc) {
        fn_82F68CC0(param_3,auStack_30[0],0x10);
      }
      else {
        puVar2 = (ushort *)param_3;
        if (uVar1 == 0x48) {
          *puVar2 = 0x48;
          *(undefined4 *)(puVar2 + 4) = auStack_30[0];
        }
        else {
          *puVar2 = uVar1;
          lVar3 = fn_82E7F868(param_3,0,auStack_30[0]);
        }
      }
    }
  }
  fn_82E7E7E0(&uStack_20);
  return lVar3;
}

