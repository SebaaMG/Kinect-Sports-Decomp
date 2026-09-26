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
extern int fn_82A403E8();
extern int fn_82A43118();
extern int fn_82A4FA30();
extern int fn_82A507C0();
extern int fn_82A51730();


longlong fn_82A43A98(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *apiStack_30 [12];
  
  lVar3 = 0;
  if (param_2 != *(int *)(param_1 + 0x40)) {
    if ((*(uint *)(param_1 + 0x38) & 4) == 0) {
      *(int *)(param_1 + 0x44) = param_2;
      *(int *)(param_1 + 0x40) = param_2;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
      lVar3 = fn_82A51730(param_1);
      if (-1 < lVar3) {
        if (*(int *)(param_1 + 0x34) == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = fn_82A4FA30();
        }
        if (-1 < (int)lVar3) {
          if ((*(uint *)(param_1 + 0x38) & 8) != 0) {
            fn_82A403E8(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x84));
            *(undefined4 *)(param_1 + 0x84) = 0;
            apiStack_30[0] = (int *)0x0;
            lVar3 = fn_82A43118(apiStack_30);
            if (lVar3 < 0) {
              return lVar3;
            }
            uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 4);
            lVar3 = fn_82A507C0(param_1,apiStack_30[0],*(undefined4 *)(param_1 + 0x8c),uVar1,
                                      uVar1,(undefined4 *)(param_1 + 0x84));
            (**(code **)(*apiStack_30[0] + 8))(apiStack_30[0]);
            if ((int)lVar3 < 0) {
              return lVar3;
            }
            if (*(int *)(param_1 + 4) == 0) {
              puVar2 = *(undefined4 **)(param_1 + 0x84);
              lVar3 = (**(code **)*puVar2)(puVar2,0x1337f001);
            }
          }
          if (-1 < (int)lVar3) {
            lVar3 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x2c))
                              (*(int **)(param_1 + 0x8c),
                               *(undefined4 *)(*(int *)(param_1 + 0x78) + 4),0x1337f001);
          }
        }
      }
    }
    else {
      lVar3 = -0x7769ffff;
    }
  }
  return lVar3;
}

