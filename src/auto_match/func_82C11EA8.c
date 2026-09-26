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


undefined8 fn_82C11EA8(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *apuStack_40 [16];
  
  uVar2 = 0;
  uVar1 = 0;
  if (*(int *)(param_2 + 0x24) != 2) {
    apuStack_40[0] = *(undefined4 **)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x24) = 2;
    if (apuStack_40[0] != (undefined4 *)0x0) {
      while( true ) {
        if ((((apuStack_40[0][0xc] == 0) && (apuStack_40[0][3] == 0)) &&
            (uVar1 = uVar1 + 1, 1 < uVar1)) && (apuStack_40[0][1] != 0)) {
          *(undefined4 *)(param_2 + 0x24) = 1;
          return uVar2;
        }
        if (apuStack_40[0][0xf] == 0) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          *(undefined4 *)(apuStack_40[0][0xf] + 0x38) = 0;
        }
        *(undefined4 *)(param_2 + 0x18) = apuStack_40[0][0xf];
        uVar2 = (**(code **)(param_1[6] + 0x24))(param_1[6],*apuStack_40[0]);
        if ((int)uVar2 < 0) break;
        if (apuStack_40[0][0xb] != 0) {
          fn_82C10B28(*param_1,0x20,apuStack_40[0][0xb]);
          fn_82C10B28(*param_1,0x20,apuStack_40[0] + 0xb);
        }
        fn_82C10B28(*param_1,0x20,apuStack_40);
        apuStack_40[0] = *(undefined4 **)(param_2 + 0x18);
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
        if (apuStack_40[0] == (undefined4 *)0x0) {
          return uVar2;
        }
      }
      return uVar2;
    }
  }
  return 0;
}

