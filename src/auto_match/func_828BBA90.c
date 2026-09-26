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
extern int fn_822315A0();
extern int fn_8223C478();
extern int fn_8260D428();
extern int fn_828A1958();
extern int fn_828BB820();
extern int fn_828E9DB8();
extern int fn_828EA268();


void fn_828BBA90(int param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  longlong lVar4;
  int aiStack_40 [16];
  
  lVar4 = 0;
  aiStack_40[0] = **(int **)(param_1 + 0xfc);
  if ((int *)aiStack_40[0] != *(int **)(param_1 + 0xfc)) {
    do {
      puVar3 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar3 = (undefined4 *)*param_2;
      }
      iVar2 = fn_8260D428(aiStack_40[0] + 0xc,0,*(undefined4 *)(aiStack_40[0] + 0x1c),puVar3,
                           param_2[4]);
      if (iVar2 == 0) break;
      lVar4 = lVar4 + 1;
      fn_828A1958(aiStack_40);
    } while (aiStack_40[0] != *(int *)(param_1 + 0xfc));
  }
  uVar1 = fn_828EA268((ulonglong)*(uint *)(param_1 + 0x100) - 1);
  fn_8223C478(param_4,uVar1,0);
  fn_828E9DB8(param_4,lVar4,uVar1);
  fn_828BB820(*param_3,param_4);
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return;
}

