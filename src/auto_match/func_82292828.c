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
extern int fn_82292780();
extern int fn_822932E8();
extern int fn_8239DD40();
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_828647D8();


undefined8 fn_82292828(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int aiStack_40 [16];
  
  piVar4 = (int *)*param_1;
  while( true ) {
    if (piVar4 == (int *)param_1[1]) {
      aiStack_40[0] = fn_8265C9E0(0x60);
      if (aiStack_40[0] == 0) {
        aiStack_40[0] = 0;
      }
      else {
        fn_82292780(aiStack_40[0],param_2);
        *(undefined4 *)(aiStack_40[0] + 0x24) = 0;
        *(undefined4 *)(aiStack_40[0] + 0x28) = 0;
        *(undefined4 *)(aiStack_40[0] + 0x2c) = 0;
        *(undefined4 *)(aiStack_40[0] + 0x34) = 0;
        *(undefined4 *)(aiStack_40[0] + 0x38) = 0;
        *(undefined4 *)(aiStack_40[0] + 0x3c) = 0;
        *(undefined4 *)(aiStack_40[0] + 0x44) = 0;
        *(undefined4 *)(aiStack_40[0] + 0x48) = 0;
        *(undefined4 *)(aiStack_40[0] + 0x4c) = 0;
        *(undefined4 *)(aiStack_40[0] + 0x58) = 1;
        *(undefined1 *)(aiStack_40[0] + 0x5c) = 0;
        fn_8239DD40(aiStack_40[0] + 0x24,100);
        fn_8239DD40(aiStack_40[0] + 0x34,100);
        fn_822932E8(aiStack_40[0] + 0x44,0xf);
      }
      fn_82536690(param_1,aiStack_40);
      return 0;
    }
    iVar1 = *piVar4;
    iVar2 = fn_828647D8(iVar1);
    iVar3 = fn_828647D8(param_2);
    if (iVar2 == iVar3) break;
    piVar4 = piVar4 + 1;
  }
  *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + 1;
  return 0;
}

