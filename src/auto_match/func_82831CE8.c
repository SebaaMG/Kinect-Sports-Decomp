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
extern int fn_828223C8();
extern int fn_82829830();
extern int fn_82F67CF8();
extern unsigned int uStack_54;
extern unsigned int uStack_58;


undefined4 fn_82831CE8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int aiStack_60 [2];
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar3 = param_1 + 0x2fc;
  do {
    do {
      fn_828223C8(iVar3,aiStack_60);
      iVar3 = aiStack_60[0];
      if (aiStack_60[0] == 0) {
        return 0;
      }
      piVar5 = (int *)(aiStack_60[0] + 0x48);
      iVar1 = (((int *)*piVar5)[1] - *(int *)*piVar5) / 0x14;
    } while (iVar1 == 0);
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)(aiStack_60[0] + 0xc);
      iVar2 = 0;
      lVar6 = (longlong)iVar1;
      do {
        puVar7 = (undefined4 *)(*(int *)*piVar5 + iVar2);
        uStack_58 = puVar7[2];
        fn_82829830(iVar3,&uStack_58);
        lVar6 = lVar6 + -1;
        iVar2 = iVar2 + 0x14;
        *puVar7 = *puVar4;
        puVar7[2] = uStack_54;
      } while (lVar6 != 0);
    }
    iVar2 = fn_82F67CF8(*(undefined4 *)*piVar5,0x14,(longlong)iVar1,param_2);
    iVar3 = aiStack_60[0];
  } while (iVar2 == iVar1);
  return 1;
}

