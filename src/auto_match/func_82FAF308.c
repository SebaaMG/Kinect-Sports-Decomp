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


undefined8 fn_82FAF308(int param_1,uint *param_2,int param_3,uint *param_4,longlong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x7c);
  uVar2 = 1;
  if (puVar3 != *(undefined4 **)(param_1 + 0x80)) {
    do {
      if (*param_2 != 0) {
        *(undefined4 *)(*param_4 * 0xc + param_3) = *puVar3;
        *(undefined4 *)(*param_4 * 0xc + param_3 + 4) =
             *(undefined4 *)(*(int *)(puVar3[1] + 0x10) + 0xc);
        *(int *)(*param_4 * 0xc + param_3 + 8) = (int)param_5;
      }
      uVar1 = *param_4;
      *param_4 = uVar1 + 1;
      if ((*param_2 != 0) && (*param_2 <= uVar1 + 1)) {
        return uVar2;
      }
      param_5 = param_5 + 1;
      uVar2 = (**(code **)(*(int *)puVar3[1] + 0x70))
                        ((int *)puVar3[1],param_2,param_3,param_4,param_5);
      if ((int)uVar2 != 1) {
        return uVar2;
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != *(undefined4 **)(param_1 + 0x80));
  }
  return uVar2;
}

