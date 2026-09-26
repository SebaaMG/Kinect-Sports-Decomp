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
extern int fn_82E4B8A8();
extern unsigned int lbl_820A6C58;


void fn_82E4BA10(double param_1,int param_2,undefined8 param_3,int param_4,uint *param_5,
                  uint *param_6,undefined8 param_7,uint param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  *(undefined4 *)(param_2 + 0x208) = 0;
  *(undefined4 *)(param_2 + 0x204) = 0;
  puVar3 = (uint *)(param_2 + 0x208);
  puVar4 = (uint *)(param_2 + 0x204);
  iVar2 = (int)param_3;
  if ((iVar2 == 8) || (iVar2 == 7)) {
    iVar1 = fn_82E4B8A8(param_2,puVar4,puVar3,param_3,param_9);
    if (iVar1 == 0) {
      if (((iVar2 == 7) && (param_4 != 2)) &&
         (((double)param_8 * param_1) / (double)(*param_5 * *param_6) < lbl_820A6C58)) {
        *(undefined4 *)(param_2 + 0x1f0) = 1;
        *puVar4 = *param_5;
        *puVar3 = *param_6;
      }
    }
    else {
      if (*puVar4 < *param_5) {
        *(undefined4 *)(param_2 + 0x1fc) = 1;
        *param_5 = *puVar4;
      }
      else {
        *puVar4 = *param_5;
      }
      if (*puVar3 < *param_6) {
        *(undefined4 *)(param_2 + 0x1fc) = 1;
        *param_6 = *puVar3;
      }
      else {
        *puVar3 = *param_6;
      }
    }
  }
  return;
}

