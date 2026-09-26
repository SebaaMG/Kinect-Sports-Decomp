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
extern int fn_82CEA280();
extern int fn_82CEB1B8();
extern int fn_82E129F0();


void fn_82E0A300(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar3;
  undefined8 uVar2;
  undefined1 auStack_30 [48];
  
  uVar1 = *(undefined4 *)*param_2;
  fn_82E129F0(param_2[1],*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14));
  pcVar3 = (char *)fn_82CEB1B8(auStack_30,param_2[1]);
  if (*pcVar3 != '\0') {
    uVar2 = fn_82CEA280((ulonglong)*(uint *)(param_1 + 4) + 0x28,uVar1,0);
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),uVar2);
    param_2[1] = (int)uVar2;
    fn_82E129F0(uVar2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14));
  }
  return;
}

