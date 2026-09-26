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
extern int fn_822CD140();
extern int fn_824BF8A8();
extern int fn_82520780();
extern int fn_82552788();
extern int fn_825529B0();
extern unsigned int iStack_70;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


undefined8 fn_82508160(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  lVar2 = fn_82520780((double)*(float *)(param_2 + 0x84),0xffffffff83265a28);
  piVar5 = *(int **)(param_1 + 0x3c);
  uVar4 = 0;
  do {
    if (piVar5 == *(int **)(param_1 + 0x40)) {
LAB_825081cc:
      if ((*(float *)(param_1 + 0x10) <= lbl_821CC160) ||
         (bVar1 = false, *(int *)(param_2 + 0x88) != 0)) {
        bVar1 = true;
      }
      iVar3 = fn_825529B0(param_1 + 4);
      if (iVar3 == 0) {
        bVar6 = true;
      }
      else {
        bVar6 = *(int *)(param_2 + 0x88) != 0;
      }
      if ((param_3 != 0) ||
         (((int)lVar2 != (int)lVar2 + -1 + (uint)(lVar2 == 0) && ((uint)LZCOUNT(uVar4) >> 5 != 0))))
      {
        if ((bVar6) && (bVar1)) {
          iStack_70 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          fn_82552788(*(undefined4 *)(param_1 + 0x14),param_1 + 4,param_2,
                            *(int *)(param_1 + 0x50),*(int *)(param_1 + 0x50) != 0,0,0,&iStack_70);
          fn_822CD140(&iStack_70);
          *(undefined4 *)(param_1 + 0x10) = lbl_8218E8E8;
          uStack_6c = *(undefined4 *)(param_2 + 0x94);
          iStack_70 = param_2;
          fn_824BF8A8(param_1 + 0x3c,&iStack_70);
          return 1;
        }
        if ((*(int *)(param_1 + 0x24) != 0) && (param_4 != 0)) {
          *(int *)(param_1 + 0x18) = param_2;
          *(int *)(param_1 + 0x1c) = param_3;
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x8c);
        }
      }
      return 0;
    }
    if (*piVar5 == param_2) {
      uVar4 = 1;
      goto LAB_825081cc;
    }
    piVar5 = piVar5 + 2;
  } while( true );
}

