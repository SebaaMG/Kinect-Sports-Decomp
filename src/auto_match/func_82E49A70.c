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
extern unsigned int *auStack_50;
extern unsigned int lbl_8214C010;
extern unsigned int lbl_8214C014;
extern unsigned int lbl_8214C018;
extern unsigned int lbl_8214C01C;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


undefined8 fn_82E49A70(int param_1)

{
  undefined2 auStack_50 [4];
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uStack_48 = 5;
  uStack_40 = lbl_8214C010;
  auStack_50[0] = 3;
  uStack_3c = lbl_8214C014;
  uStack_38 = lbl_8214C018;
  uStack_34 = lbl_8214C01C;
  uStack_30 = 10;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x18))(*(int **)(param_1 + 0xbc),&uStack_40,auStack_50);
  uStack_48 = 100;
  auStack_50[0] = 3;
  uStack_30 = 0x11;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x18))(*(int **)(param_1 + 0xbc),&uStack_40,auStack_50);
  uStack_30 = 0x1c;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x18))(*(int **)(param_1 + 0xbc),&uStack_40,auStack_50);
  uStack_30 = 0x19;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x18))(*(int **)(param_1 + 0xbc),&uStack_40,auStack_50);
  return 0;
}

