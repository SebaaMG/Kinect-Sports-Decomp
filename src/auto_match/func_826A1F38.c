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
extern unsigned int *auStack_30;
extern int fn_8267BED0();
extern int fn_82695FA0();


void fn_826A1F38(int param_1,int param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 auStack_30 [12];
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x38))) {
    param_2 = param_2 * 4;
    if (*(int *)(*(int *)(param_1 + 0x34) + param_2) == 0) {
      auStack_30[0] = 0x143;
      puVar1 = (undefined1 *)fn_8267BED0(param_1,0x10,auStack_30);
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = (undefined1 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      *(undefined1 **)(*(int *)(param_1 + 0x34) + param_2) = puVar1;
    }
    fn_82695FA0(*(undefined4 *)(*(int *)(param_1 + 0x34) + param_2),param_3);
  }
  return;
}

