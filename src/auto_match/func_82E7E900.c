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
extern int fn_82E4FE08();
extern int fn_82E50338();
extern int fn_82F68CC0();


longlong fn_82E7E900(short *param_1,short *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if ((param_2 == (short *)0x0) || (param_1 == param_2)) {
    lVar4 = -0x7fffbffd;
  }
  else {
    lVar4 = fn_82E50338(param_1,param_2);
    if (lVar4 < 0) {
      lVar4 = 0;
      if (*param_2 == 0x1041) {
        *param_1 = 0x1041;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
        puVar3 = (undefined4 *)fn_82E4FE08(*(int *)(param_2 + 4) << 3);
        *(undefined4 **)(param_1 + 6) = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
LAB_82e7e9e0:
          lVar4 = -0x7ff8fff2;
        }
        else {
          uVar5 = 0;
          if (*(int *)(param_2 + 4) != 0) {
            puVar6 = (undefined4 *)(*(int *)(param_2 + 6) + -8);
            do {
              *puVar3 = puVar6[2];
              uVar2 = fn_82E4FE08(puVar6[2]);
              puVar3[1] = (int)uVar2;
              if ((uVar2 & 0xffffffff) == 0) goto LAB_82e7e9e0;
              puVar1 = puVar6 + 3;
              puVar6 = puVar6 + 2;
              fn_82F68CC0(uVar2,*puVar1,*puVar6);
              uVar5 = uVar5 + 1;
              puVar3 = puVar3 + 2;
            } while (uVar5 < *(uint *)(param_2 + 4));
          }
        }
      }
      else {
        lVar4 = -0x3ff2c918;
      }
    }
  }
  return lVar4;
}

