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
extern int fn_82E4FE40();
extern int fn_82EE0A68();
extern int fn_82EF2CB8();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


undefined8 fn_82EF3818(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int aiStack_2c [11];
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x264) != 0) {
    iVar1 = param_1 + 0x58;
    do {
      fn_82EF2CB8(iVar1,uVar2,&iStack_40);
      if (*(int *)(iStack_40 + 4) != 0) {
        fn_82E4FE40();
      }
      fn_82EF2CB8(iVar1,uVar2,&iStack_3c);
      *(undefined4 *)(iStack_3c + 4) = 0;
      fn_82EF2CB8(iVar1,uVar2,&iStack_38);
      if (*(int *)(iStack_38 + 8) != 0) {
        fn_82E4FE40();
      }
      fn_82EF2CB8(iVar1,uVar2,&iStack_34);
      *(undefined4 *)(iStack_34 + 8) = 0;
      fn_82EF2CB8(iVar1,uVar2,&iStack_30);
      if (*(int *)(iStack_30 + 0x10) != 0) {
        fn_82E4FE40();
      }
      fn_82EF2CB8(iVar1,uVar2,aiStack_2c);
      uVar2 = uVar2 + 1;
      *(undefined4 *)(aiStack_2c[0] + 0x10) = 0;
    } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x264));
  }
  fn_82EE0A68(param_1 + 0x58,0);
  *(undefined4 *)(param_1 + 0x264) = 0;
  return 0;
}

