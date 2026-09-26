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
extern int fn_82FA5190();
extern int fn_82FECE48();
extern int fn_82FEF778();
extern int fn_82FF3B98();
extern int fn_83054338();
extern int iRam831bc7c8;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC7B4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82FF3468(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  RtlEnterCriticalSection(0xffffffff83264580);
  iVar1 = lbl_831BC7B4;
  while (lbl_831BC7B4 = iVar1, iRam831bc7c8 != 0) {
    piVar3 = (int *)(iVar1 + 4);
    fn_82FEF778((double)*(float *)(iVar1 + 0x10),*piVar3,*(undefined4 *)(iVar1 + 8),
                    *(undefined4 *)(iVar1 + 0xc));
    if (*(int *)(iVar1 + 8) == 4) {
      fn_83054338(0xffffffff83264574,*piVar3);
      piVar3 = (int *)*piVar3;
      if (piVar3 != (int *)0x0) {
        fn_82FECE48(piVar3);
        (**(code **)(*piVar3 + 8))(piVar3,0);
        uVar2 = lbl_831BC768;
        (**(code **)*piVar3)(piVar3,0);
        fn_82FA5190(uVar2,piVar3);
      }
    }
    iVar1 = lbl_831BC7B4;
    if (lbl_831BC7B4 != 0) {
      fn_82FF3B98(0xffffffff831bc7b4,lbl_831BC7B4,0);
      iVar1 = lbl_831BC7B4;
    }
  }
  RtlLeaveCriticalSection(0xffffffff83264580);
  return;
}

