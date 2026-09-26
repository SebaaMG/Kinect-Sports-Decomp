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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAFE40();
extern int fn_82FB6808();
extern unsigned int lbl_831BC768;


undefined8 fn_82FB6A10(undefined8 param_1,int *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = fn_82FAFE40();
  uVar7 = (ulonglong)*(uint *)*param_2;
  *param_2 = (int)((uint *)*param_2 + 1);
  if (uVar7 != 0) {
    iVar5 = fn_82FA5060(lbl_831BC768,uVar7 * 0x54);
    if (iVar5 == 0) {
      uVar4 = 2;
    }
    else {
      if (uVar7 != 0) {
        puVar6 = (undefined1 *)(iVar5 + -3);
        uVar8 = uVar7;
        do {
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 3) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 7) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0xb) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0xf) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x13) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x17) = uVar3;
          uVar1 = *(undefined1 *)*param_2;
          *param_2 = (int)((undefined1 *)*param_2 + 1);
          puVar6[0x1b] = uVar1;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x1f) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x23) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x27) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x2b) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x2f) = uVar3;
          uVar2 = *(undefined2 *)*param_2;
          *param_2 = (int)((undefined2 *)*param_2 + 1);
          *(undefined2 *)(puVar6 + 0x33) = uVar2;
          uVar1 = *(undefined1 *)*param_2;
          *param_2 = (int)((undefined1 *)*param_2 + 1);
          puVar6[0x35] = uVar1;
          uVar1 = *(undefined1 *)*param_2;
          *param_2 = (int)((undefined1 *)*param_2 + 1);
          puVar6[0x36] = uVar1;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x37) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x3b) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x3f) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x43) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x47) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x4b) = uVar3;
          uVar3 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          *(undefined4 *)(puVar6 + 0x4f) = uVar3;
          uVar1 = *(undefined1 *)*param_2;
          *param_2 = (int)((undefined1 *)*param_2 + 1);
          puVar6[0x53] = uVar1;
          uVar1 = *(undefined1 *)*param_2;
          *param_2 = (int)((undefined1 *)*param_2 + 1);
          puVar6 = puVar6 + 0x54;
          *puVar6 = uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      fn_82FB6808(param_1,uVar7,iVar5);
      fn_82FA5190(lbl_831BC768,iVar5);
    }
  }
  return uVar4;
}

