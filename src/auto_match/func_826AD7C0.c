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


void fn_826AD7C0(int param_1,int *param_2)

{
  bool bVar1;
  int iVar3;
  ulonglong uVar2;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    if ((*(int *)(iVar3 + 0xc) == 0) || (bVar1 = false, **(char **)(iVar3 + 8) == '\0')) {
      bVar1 = true;
    }
    if (!bVar1) {
      iVar3 = (**(code **)(*param_2 + 0x5c))(param_2);
      uVar2 = fn_8267B890(*(undefined4 *)(*(int *)(iVar3 + 0x78) + 0x288),0x20,0);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_826AA930(uVar2,iVar3 + 0x78,*(undefined4 *)(param_1 + 4));
      }
      fn_826C7030(param_2,uVar2,2);
      if ((uVar2 & 0xffffffff) != 0) {
        fn_8267C498(uVar2);
      }
    }
    return;
  }
  return;
}

