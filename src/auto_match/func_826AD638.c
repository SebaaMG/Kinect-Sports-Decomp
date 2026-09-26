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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826AA930();
extern int fn_826C7030();


void fn_826AD638(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar4;
  ulonglong uVar3;
  
  iVar4 = (**(code **)(*param_2 + 0x5c))(param_2);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0xc) == 0) || (bVar2 = false, **(char **)(iVar1 + 8) == '\0')) {
      bVar2 = true;
    }
    if (!bVar2) {
      uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(iVar4 + 0x78) + 0x288),0x20,0);
      if ((uVar3 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_826AA930(uVar3,iVar4 + 0x78,*(undefined4 *)(param_1 + 4));
      }
      fn_826C7030(param_2,uVar3,4);
      if ((uVar3 & 0xffffffff) != 0) {
        fn_8267C498(uVar3);
      }
    }
    return;
  }
  return;
}

