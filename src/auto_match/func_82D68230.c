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
extern int fn_82CE5410();
extern int fn_82D75830();
extern int fn_82D781D0();
extern unsigned int lbl_821395F4;
extern float lbl_8213962C;


undefined4 * fn_82D68230(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(float *)(param_3 + 8) < *(float *)(*param_1 + 0x2c) * lbl_8213962C) &&
     (*(float *)(param_3 + 8) < *(float *)(*param_2 + 0x2c) * lbl_8213962C)) {
    iVar1 = fn_82CE5410();
    puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x50)
    ;
    *(undefined2 *)(puVar2 + 1) = 0x50;
    puVar2[2] = param_4;
    *(undefined2 *)((int)puVar2 + 6) = 1;
    *puVar2 = &lbl_821395F4;
    fn_82D781D0(puVar2 + 4);
    return puVar2;
  }
  puVar2 = (undefined4 *)fn_82D75830();
  return puVar2;
}

