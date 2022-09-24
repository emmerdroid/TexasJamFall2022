using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonController : MonoBehaviour
{

    [SerializeField] SpriteRenderer an_SR;
    [SerializeField] Sprite defImage;
    [SerializeField] Sprite pressedImage;

    public KeyCode keytoPress;
    // Start is called before the first frame update
    void Start()
    {
        an_SR = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        //when button pressed, switch to the 
        if (Input.GetKeyDown(keytoPress))
        {
            an_SR.sprite = pressedImage;
        }

        if (Input.GetKeyUp(keytoPress))
        {
            an_SR.sprite = defImage;
        }
    }
}
