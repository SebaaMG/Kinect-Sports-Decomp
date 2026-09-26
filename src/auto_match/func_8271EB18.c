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
extern int fn_8267C498();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82697610();
extern int fn_826A7398();
extern int fn_82711FA8();


void fn_8271EB18(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  int *apiStack_30 [12];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  uVar5 = 0;
  *puVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = fn_826A7398();
    fn_82711FA8(apiStack_30,uVar3);
    if (apiStack_30[0] != (int *)0x0) {
      iVar4 = (**(code **)(*apiStack_30[0] + 0x9c))(apiStack_30[0]);
      if (iVar4 == 4) {
        uVar3 = 0x7fffffff;
        if (1 < *(int *)(param_1 + 0x1c)) {
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          uVar5 = fn_826957D0(param_1,0,0x7fffffff);
          uVar5 = fn_82697610(uVar5,uVar2);
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          uVar3 = fn_826957D0(param_1,1);
          uVar3 = fn_82697610(uVar3,uVar2);
        }
        (**(code **)(*apiStack_30[0] + 0x154))(apiStack_30[0],uVar5,uVar3);
      }
      fn_8267C498(apiStack_30[0]);
    }
  }
  return;
}

