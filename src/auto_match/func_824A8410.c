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
extern int fn_82F622A8();


void fn_824A8410(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_2 != param_1) {
    puVar1 = (undefined4 *)*param_1;
    puVar2 = (undefined4 *)*param_2;
    puVar6 = (undefined4 *)*puVar1;
    puVar7 = (undefined4 *)*puVar2;
    while (puVar6 != puVar1) {
      if (puVar7 == puVar2) {
        return;
      }
      if ((float)puVar6[3] <= (float)puVar7[3]) {
        puVar6 = (undefined4 *)*puVar6;
      }
      else {
        puVar3 = (undefined4 *)*puVar7;
        if (param_1[1] == 0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
          fn_82F622A8(0xffffffff8219852c);
        }
        param_1[1] = param_1[1] + 1;
        param_2[1] = param_2[1] + -1;
        *(undefined4 **)puVar7[1] = puVar3;
        *(undefined4 **)puVar3[1] = puVar6;
        *(undefined4 **)puVar6[1] = puVar7;
        uVar5 = puVar6[1];
        puVar6[1] = puVar3[1];
        puVar3[1] = puVar7[1];
        puVar7[1] = uVar5;
        puVar7 = puVar3;
      }
    }
    if (puVar7 != puVar2) {
      uVar4 = param_2[1];
      if (0x1ffffffeU - param_1[1] < uVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff8219852c);
      }
      param_1[1] = param_1[1] + uVar4;
      param_2[1] = param_2[1] - uVar4;
      *(undefined4 **)puVar7[1] = puVar2;
      *(undefined4 **)puVar2[1] = puVar1;
      *(undefined4 **)puVar1[1] = puVar7;
      uVar5 = puVar1[1];
      puVar1[1] = puVar2[1];
      puVar2[1] = puVar7[1];
      puVar7[1] = uVar5;
    }
  }
  return;
}

