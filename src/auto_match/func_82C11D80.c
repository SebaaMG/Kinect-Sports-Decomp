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
extern int fn_82C10B28();


undefined8 fn_82C11D80(int param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined4 *apuStack_30 [12];
  
  uVar1 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == (undefined4 *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    apuStack_30[0] = *(undefined4 **)(param_2 + 0x18);
    while (apuStack_30[0] != (undefined4 *)0x0) {
      if (apuStack_30[0][0xf] != 0) {
        *(undefined4 *)(apuStack_30[0][0xf] + 0x38) = 0;
      }
      *(undefined4 *)(param_2 + 0x18) = apuStack_30[0][0xf];
      (**(code **)(param_4[6] + 0x24))(param_4[6],*apuStack_30[0]);
      if (apuStack_30[0][0xb] != 0) {
        uVar1 = fn_82C10B28(*param_4,0x20,apuStack_30[0][0xb]);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_82C10B28(*param_4,0x20,apuStack_30[0] + 0xb);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      uVar1 = fn_82C10B28(*param_4,0x20,apuStack_30);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      apuStack_30[0] = *(undefined4 **)(param_2 + 0x18);
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    }
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return uVar1;
}

