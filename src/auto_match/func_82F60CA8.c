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
extern int fn_82F61A28();
extern int fn_82F61AB0();
extern int fn_82F61B68();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


longlong fn_82F60CA8(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uStack_30;
  int iStack_2c;
  int aiStack_28 [10];
  
  iVar2 = param_1 + 4;
  uStack_30 = 0;
  lVar1 = fn_82F61A28(iVar2,&uStack_30);
  if (lVar1 == 0) {
    if ((int)uStack_30 < 1) {
      fn_82F61AB0(iVar2);
      lVar1 = -0x7ddbfbf9;
    }
    else {
      fn_82F61B68(iVar2,(ulonglong)uStack_30 - 1,aiStack_28);
      fn_82F61B68(iVar2,0,&iStack_2c);
      if (*(int *)(param_1 + 0x5c) == *(int *)(iStack_2c + 0x44)) {
        fn_82F61AB0(iVar2);
        lVar1 = -0x7ddbfbf8;
      }
      else {
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(aiStack_28[0] + 0x44);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iStack_2c + 0x44);
      }
    }
  }
  return lVar1;
}

